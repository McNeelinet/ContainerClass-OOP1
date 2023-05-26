#include <QtTest>
#include <iostream>
#include <stdexcept>

#include "../set.h"
#include "../set.cpp"
#include "../Iterator.h"
#include "../Iterator.cpp"


class set_test : public QObject
{
    Q_OBJECT

public:
    set_test();
    ~set_test();

private slots:
    void test_copy_constructor_empty();
    void test_copy_constructor_filled();

    void test_move_constructor_empty();
    void test_move_constructor_filled();

    void test_init_list_constructor_empty();
    void test_init_list_constructor_filled();

    void test_get_length_growing();
    void test_get_length_falling();
    void test_get_length_random();

    void test_contains_empty();
    void test_contains_filled();
    void test_contains_wrong();

    //to array

    //iterator_begin

    //iterator_end

    //get_first

    //get_last

    void test_add_empty();
    void test_add_filled();

    void test_remove_empty();
    void test_remove_filled();

    void test_clear_empty();
    void test_clear_filled();

    void test_set_union_unique();
    void test_set_union_doubles();

    void test_set_intersection_empty();
    void test_set_intersection_filled();

    void test_set_substract_empty();
    void test_set_substract_filled();

    void test_equalty_overload_empty();
    void test_equalty_overload_filled();

    void test_plus_equal_overload();
    void test_star_equal_overload();
    void test_slash_equal_overload();

    void test_arrows_overload_empty();
    void test_arrows_overload_filled();

    void test_plus_overload();
    void test_star_overload();
    void test_slash_overload();
};

set_test::set_test()
{

}

set_test::~set_test()
{

}

void set_test::test_copy_constructor_empty()
{
    set<int> my_set1;

    QCOMPARE(my_set1.get_length(), 0);

    set<int> my_set2(my_set1);

    QCOMPARE(my_set2.get_length(), 0);
}

void set_test::test_copy_constructor_filled()
{
    set<int> my_set1;

    my_set1.add(1);
    my_set1.add(2);
    my_set1.add(3);

    QCOMPARE(my_set1.get_length(), 3);

    set<int> my_set2(my_set1);

    QCOMPARE(my_set2.get_length(), 3);
    QCOMPARE(my_set2.contains(1), true);
    QCOMPARE(my_set2.contains(2), true);
    QCOMPARE(my_set2.contains(3), true);
}

void set_test::test_move_constructor_empty()
{
    set<int> my_set1;

    QCOMPARE(my_set1.get_length(), 0);

    set<int> my_set2(std::move(my_set1));

    QCOMPARE(my_set2.get_length(), 0);
}

void set_test::test_move_constructor_filled()
{
    set<int> my_set1;

    my_set1.add(1);
    my_set1.add(2);
    my_set1.add(3);

    QCOMPARE(my_set1.get_length(), 3);

    set<int> my_set2(std::move(my_set1));

    QCOMPARE(my_set2.get_length(), 3);
    QCOMPARE(my_set2.contains(1), true);
    QCOMPARE(my_set2.contains(2), true);
    QCOMPARE(my_set2.contains(3), true);
}

void set_test::test_init_list_constructor_empty()
{
    set<int> my_set1{};

    QCOMPARE(my_set1.get_length(), 0);
}

void set_test::test_init_list_constructor_filled()
{
    set<int> my_set1{1, 2, 3};

    QCOMPARE(my_set1.get_length(), 3);
    QCOMPARE(my_set1.contains(1), true);
    QCOMPARE(my_set1.contains(2), true);
    QCOMPARE(my_set1.contains(3), true);
}

void set_test::test_get_length_growing()
{
    set<int> my_set;

    QCOMPARE(my_set.get_length(), 0);

    my_set.add(1);

    QCOMPARE(my_set.get_length(), 1);

    my_set.add(2);
    my_set.add(3);

    QCOMPARE(my_set.get_length(), 3);
}

void set_test::test_get_length_falling()
{
    set<int> my_set{1, 2, 3};

    QCOMPARE(my_set.get_length(), 3);

    my_set.remove(3);

    QCOMPARE(my_set.get_length(), 2);

    my_set.remove(2);
    my_set.remove(1);

    QCOMPARE(my_set.get_length(), 0);
}

void set_test::test_get_length_random()
{
    set<int> my_set;

    my_set.add(1);
    my_set.add(2);

    QCOMPARE(my_set.get_length(), 2);

    my_set.remove(2);

    QCOMPARE(my_set.get_length(), 1);

    my_set.add(3);

    QCOMPARE(my_set.get_length(), 2);

    my_set.remove(3);
    my_set.remove(1);

    QCOMPARE(my_set.get_length(), 0);
}

void set_test::test_contains_empty()
{
    set<int> my_set;

    QCOMPARE(my_set.contains(54), false);
}

void set_test::test_contains_filled()
{
    set<int> my_set{1, 2, 3, 4, 5};

    QCOMPARE(my_set.contains(1), true);
    QCOMPARE(my_set.contains(3), true);
    QCOMPARE(my_set.contains(5), true);
    QCOMPARE(my_set.contains(7), false);
}

void set_test::test_contains_wrong()
{
    set<int> my_set{1, 3, 5};

    QCOMPARE(my_set.contains(2), false);
    QCOMPARE(my_set.contains(4), false);

    my_set.add(6);

    QCOMPARE(my_set.contains(6), true);
}

void set_test::test_add_empty()
{
    set<int> my_set;

    QCOMPARE(my_set.get_length(), 0);
    QCOMPARE(my_set.contains(1), false);

    my_set.add(1);

    QCOMPARE(my_set.get_length(), 1);
    QCOMPARE(my_set.contains(1), true);

    try {
        my_set.add(1);
        QCOMPARE(my_set.get_length(), 2);
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }
}

void set_test::test_add_filled()
{
    set<int> my_set{1};

    QCOMPARE(my_set.get_length(), 1);
    QCOMPARE(my_set.contains(2), false);

    my_set.add(2);

    QCOMPARE(my_set.get_length(), 2);
    QCOMPARE(my_set.contains(2), true);
    QCOMPARE(my_set.contains(3), false);

    my_set.add(3);

    QCOMPARE(my_set.get_length(), 3);
    QCOMPARE(my_set.contains(3), true);
}

void set_test::test_remove_empty()
{
    set<int> my_set;

    QCOMPARE(my_set.get_length(), 0);

    try {
        my_set.remove(0);
        QCOMPARE(my_set.get_length(), 2);
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }

    QCOMPARE(my_set.get_length(), 0);
}

void set_test::test_remove_filled()
{
    set<int> my_set{1, 3, 5};

    QCOMPARE(my_set.get_length(), 3);

    try {
        my_set.remove(2);
        QCOMPARE(my_set.get_length(), 2);
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << "\n";
    }

    QCOMPARE(my_set.get_length(), 3);

    my_set.remove(1);
    my_set.remove(5);

    QCOMPARE(my_set.get_length(), 1);
}

void set_test::test_clear_empty()
{
    set<int> my_set;

    QCOMPARE(my_set.get_length(), 0);

    my_set.clear();

    QCOMPARE(my_set.get_length(), 0);
}

void set_test::test_clear_filled()
{
    set<int> my_set{1, 2, 3, 4, 5};

    QCOMPARE(my_set.get_length(), 5);

    my_set.clear();

    QCOMPARE(my_set.get_length(), 0);
}

void set_test::test_set_union_unique()
{
    set<int> my_set1{1, 3, 5, 7};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 4);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3(my_set1.set_union(my_set2));

    QCOMPARE(my_set3.get_length(), 8);
    QCOMPARE(my_set3.contains(1), true);
    QCOMPARE(my_set3.contains(2), true);
    QCOMPARE(my_set3.contains(3), true);
    QCOMPARE(my_set3.contains(4), true);
    QCOMPARE(my_set3.contains(5), true);
    QCOMPARE(my_set3.contains(6), true);
    QCOMPARE(my_set3.contains(7), true);
    QCOMPARE(my_set3.contains(8), true);
}

void set_test::test_set_union_doubles()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3(my_set1.set_union(my_set2));

    QCOMPARE(my_set3.get_length(), 9);
    QCOMPARE(my_set3.contains(1), true);
    QCOMPARE(my_set3.contains(2), true);
    QCOMPARE(my_set3.contains(3), true);
    QCOMPARE(my_set3.contains(4), true);
    QCOMPARE(my_set3.contains(5), true);
    QCOMPARE(my_set3.contains(6), true);
    QCOMPARE(my_set3.contains(7), true);
    QCOMPARE(my_set3.contains(8), true);
    QCOMPARE(my_set3.contains(9), true);
}

void set_test::test_set_intersection_empty()
{
    set<int> my_set1{};
    set<int> my_set2{};

    QCOMPARE(my_set1.get_length(), 0);
    QCOMPARE(my_set2.get_length(), 0);

    set<int> my_set3(my_set1.set_intersection(my_set2));

    QCOMPARE(my_set3.get_length(), 0);

    set<int> my_set4(my_set2.set_intersection(my_set1));

    QCOMPARE(my_set4.get_length(), 0);
}

void set_test::test_set_intersection_filled()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3(my_set1.set_intersection(my_set2));

    QCOMPARE(my_set3.get_length(), 2);
    QCOMPARE(my_set3.contains(2), true);
    QCOMPARE(my_set3.contains(6), true);

    set<int> my_set4(my_set2.set_intersection(my_set1));

    QCOMPARE(my_set4.get_length(), 2);
    QCOMPARE(my_set4.contains(2), true);
    QCOMPARE(my_set4.contains(6), true);
}

void set_test::test_set_substract_empty()
{
    set<int> my_set1{};
    set<int> my_set2{};

    QCOMPARE(my_set1.get_length(), 0);
    QCOMPARE(my_set2.get_length(), 0);

    set<int> my_set3(my_set1.set_substract(my_set2));

    QCOMPARE(my_set1.get_length(), 0);
}

void set_test::test_set_substract_filled()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3(my_set1.set_substract(my_set2));

    QCOMPARE(my_set3.get_length(), 7);
    QCOMPARE(my_set3.contains(1), true);
    QCOMPARE(my_set3.contains(3), true);
    QCOMPARE(my_set3.contains(5), true);
    QCOMPARE(my_set3.contains(7), true);
    QCOMPARE(my_set3.contains(9), true);
    QCOMPARE(my_set3.contains(4), true);
    QCOMPARE(my_set3.contains(8), true);
}

void set_test::test_equalty_overload_empty()
{
    set<int> my_set1;
    set<int> my_set2 = my_set1;

    QCOMPARE(my_set1.get_length(), 0);
    QCOMPARE(my_set2.get_length(), 0);
}

void set_test::test_equalty_overload_filled()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2 = my_set1;

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 7);
}

void set_test::test_plus_equal_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    my_set1 += my_set2;

    QCOMPARE(my_set1.get_length(), 9);
    QCOMPARE(my_set1.contains(1), true);
    QCOMPARE(my_set1.contains(2), true);
    QCOMPARE(my_set1.contains(3), true);
    QCOMPARE(my_set1.contains(4), true);
    QCOMPARE(my_set1.contains(5), true);
    QCOMPARE(my_set1.contains(6), true);
    QCOMPARE(my_set1.contains(7), true);
    QCOMPARE(my_set1.contains(8), true);
    QCOMPARE(my_set1.contains(9), true);
}

void set_test::test_star_equal_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    my_set1 *= my_set2;

    QCOMPARE(my_set1.get_length(), 2);
    QCOMPARE(my_set1.contains(2), true);
    QCOMPARE(my_set1.contains(6), true);
}

void set_test::test_slash_equal_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    my_set1 /= my_set2;

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set1.contains(1), true);
    QCOMPARE(my_set1.contains(3), true);
    QCOMPARE(my_set1.contains(5), true);
    QCOMPARE(my_set1.contains(7), true);
    QCOMPARE(my_set1.contains(9), true);
    QCOMPARE(my_set1.contains(4), true);
    QCOMPARE(my_set1.contains(8), true);
}

void set_test::test_arrows_overload_empty()
{
    set<int> my_set1{};

    std::cout << my_set1 << "\n";
}

void set_test::test_arrows_overload_filled()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};

    std::cout << my_set1 << "\n";
}

void set_test::test_plus_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3 = my_set1 + my_set2;

    QCOMPARE(my_set3.get_length(), 9);
    QCOMPARE(my_set3.contains(1), true);
    QCOMPARE(my_set3.contains(2), true);
    QCOMPARE(my_set3.contains(3), true);
    QCOMPARE(my_set3.contains(4), true);
    QCOMPARE(my_set3.contains(5), true);
    QCOMPARE(my_set3.contains(6), true);
    QCOMPARE(my_set3.contains(7), true);
    QCOMPARE(my_set3.contains(8), true);
    QCOMPARE(my_set3.contains(9), true);
}

void set_test::test_star_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3 = my_set1 * my_set2;;

    QCOMPARE(my_set3.get_length(), 2);
    QCOMPARE(my_set3.contains(2), true);
    QCOMPARE(my_set3.contains(6), true);
}

void set_test::test_slash_overload()
{
    set<int> my_set1{1, 2, 3, 5, 6, 7, 9};
    set<int> my_set2{2, 4, 6, 8};

    QCOMPARE(my_set1.get_length(), 7);
    QCOMPARE(my_set2.get_length(), 4);

    set<int> my_set3 = my_set1 / my_set2;;

    QCOMPARE(my_set3.get_length(), 7);
    QCOMPARE(my_set3.contains(1), true);
    QCOMPARE(my_set3.contains(3), true);
    QCOMPARE(my_set3.contains(5), true);
    QCOMPARE(my_set3.contains(7), true);
    QCOMPARE(my_set3.contains(9), true);
    QCOMPARE(my_set3.contains(4), true);
    QCOMPARE(my_set3.contains(8), true);
}

QTEST_APPLESS_MAIN(set_test)

#include "tst_set_test.moc"

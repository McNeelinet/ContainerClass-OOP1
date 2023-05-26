#include <QtTest>

#include "../../set/Iterator.h"
#include "../../set/set.h"
#include "../../set/Iterator.cpp"
#include "../../set/set.cpp"

class method_init_list_constructor : public QObject
{
    Q_OBJECT

public:
    method_init_list_constructor();
    ~method_init_list_constructor();

private slots:
    void test_with_values();
    void test_without_values();
};

void method_init_list_constructor::test_with_values()
{
    set<int> my_set{1, 2, 3};

    QCOMPARE(my_set.get_length(), 3);
    QCOMPARE(my_set.contains(1), true);
    QCOMPARE(my_set.contains(2), true);
    QCOMPARE(my_set.contains(3), true);
}

void method_init_list_constructor::test_without_values()
{
    set<int> my_set{};

    QCOMPARE(my_set.get_length(), 0);
}

method_init_list_constructor::method_init_list_constructor()
{

}

method_init_list_constructor::~method_init_list_constructor()
{

}

QTEST_APPLESS_MAIN(method_init_list_constructor)

#include "tst_method_init_list_constructor.moc"

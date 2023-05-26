#include <QtTest>

// add necessary includes here

class method_star_equal_overload : public QObject
{
    Q_OBJECT

public:
    method_star_equal_overload();
    ~method_star_equal_overload();

private slots:
    void test_case1();

};

method_star_equal_overload::method_star_equal_overload()
{

}

method_star_equal_overload::~method_star_equal_overload()
{

}

void method_star_equal_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_star_equal_overload)

#include "tst_method_star_equal_overload.moc"

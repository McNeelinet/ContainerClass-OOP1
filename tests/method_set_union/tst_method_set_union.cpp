#include <QtTest>

// add necessary includes here

class method_set_union : public QObject
{
    Q_OBJECT

public:
    method_set_union();
    ~method_set_union();

private slots:
    void test_case1();

};

method_set_union::method_set_union()
{

}

method_set_union::~method_set_union()
{

}

void method_set_union::test_case1()
{

}

QTEST_APPLESS_MAIN(method_set_union)

#include "tst_method_set_union.moc"

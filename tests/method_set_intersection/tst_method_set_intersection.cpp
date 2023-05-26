#include <QtTest>

// add necessary includes here

class method_set_intersection : public QObject
{
    Q_OBJECT

public:
    method_set_intersection();
    ~method_set_intersection();

private slots:
    void test_case1();

};

method_set_intersection::method_set_intersection()
{

}

method_set_intersection::~method_set_intersection()
{

}

void method_set_intersection::test_case1()
{

}

QTEST_APPLESS_MAIN(method_set_intersection)

#include "tst_method_set_intersection.moc"

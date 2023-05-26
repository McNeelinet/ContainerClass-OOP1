#include <QtTest>

// add necessary includes here

class method_contains : public QObject
{
    Q_OBJECT

public:
    method_contains();
    ~method_contains();

private slots:
    void test_case1();

};

method_contains::method_contains()
{

}

method_contains::~method_contains()
{

}

void method_contains::test_case1()
{

}

QTEST_APPLESS_MAIN(method_contains)

#include "tst_method_contains.moc"

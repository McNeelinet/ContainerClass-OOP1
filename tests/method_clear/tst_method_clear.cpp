#include <QtTest>

// add necessary includes here

class method_clear : public QObject
{
    Q_OBJECT

public:
    method_clear();
    ~method_clear();

private slots:
    void test_case1();

};

method_clear::method_clear()
{

}

method_clear::~method_clear()
{

}

void method_clear::test_case1()
{

}

QTEST_APPLESS_MAIN(method_clear)

#include "tst_method_clear.moc"

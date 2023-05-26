#include <QtTest>

// add necessary includes here

class method_get_last : public QObject
{
    Q_OBJECT

public:
    method_get_last();
    ~method_get_last();

private slots:
    void test_case1();

};

method_get_last::method_get_last()
{

}

method_get_last::~method_get_last()
{

}

void method_get_last::test_case1()
{

}

QTEST_APPLESS_MAIN(method_get_last)

#include "tst_method_get_last.moc"

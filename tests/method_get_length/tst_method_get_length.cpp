#include <QtTest>

// add necessary includes here

class method_get_length : public QObject
{
    Q_OBJECT

public:
    method_get_length();
    ~method_get_length();

private slots:
    void test_case1();

};

method_get_length::method_get_length()
{

}

method_get_length::~method_get_length()
{

}

void method_get_length::test_case1()
{

}

QTEST_APPLESS_MAIN(method_get_length)

#include "tst_method_get_length.moc"

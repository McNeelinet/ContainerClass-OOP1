#include <QtTest>

// add necessary includes here

class method_slash_equal_overload : public QObject
{
    Q_OBJECT

public:
    method_slash_equal_overload();
    ~method_slash_equal_overload();

private slots:
    void test_case1();

};

method_slash_equal_overload::method_slash_equal_overload()
{

}

method_slash_equal_overload::~method_slash_equal_overload()
{

}

void method_slash_equal_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_slash_equal_overload)

#include "tst_method_slash_equal_overload.moc"

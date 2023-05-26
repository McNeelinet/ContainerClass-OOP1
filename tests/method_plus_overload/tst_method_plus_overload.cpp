#include <QtTest>

// add necessary includes here

class method_plus_overload : public QObject
{
    Q_OBJECT

public:
    method_plus_overload();
    ~method_plus_overload();

private slots:
    void test_case1();

};

method_plus_overload::method_plus_overload()
{

}

method_plus_overload::~method_plus_overload()
{

}

void method_plus_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_plus_overload)

#include "tst_method_plus_overload.moc"

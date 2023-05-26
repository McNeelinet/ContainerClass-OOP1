#include <QtTest>

// add necessary includes here

class method_arrows_overload : public QObject
{
    Q_OBJECT

public:
    method_arrows_overload();
    ~method_arrows_overload();

private slots:
    void test_case1();

};

method_arrows_overload::method_arrows_overload()
{

}

method_arrows_overload::~method_arrows_overload()
{

}

void method_arrows_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_arrows_overload)

#include "tst_method_arrows_overload.moc"

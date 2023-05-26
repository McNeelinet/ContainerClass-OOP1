#include <QtTest>

// add necessary includes here

class method_equalty_overload : public QObject
{
    Q_OBJECT

public:
    method_equalty_overload();
    ~method_equalty_overload();

private slots:
    void test_case1();

};

method_equalty_overload::method_equalty_overload()
{

}

method_equalty_overload::~method_equalty_overload()
{

}

void method_equalty_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_equalty_overload)

#include "tst_method_equalty_overload.moc"

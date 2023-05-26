#include <QtTest>

// add necessary includes here

class method_star_overload : public QObject
{
    Q_OBJECT

public:
    method_star_overload();
    ~method_star_overload();

private slots:
    void test_case1();

};

method_star_overload::method_star_overload()
{

}

method_star_overload::~method_star_overload()
{

}

void method_star_overload::test_case1()
{

}

QTEST_APPLESS_MAIN(method_star_overload)

#include "tst_method_star_overload.moc"

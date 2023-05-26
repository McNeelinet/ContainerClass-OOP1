#include <QtTest>

// add necessary includes here

class method_to_array : public QObject
{
    Q_OBJECT

public:
    method_to_array();
    ~method_to_array();

private slots:
    void test_case1();

};

method_to_array::method_to_array()
{

}

method_to_array::~method_to_array()
{

}

void method_to_array::test_case1()
{

}

QTEST_APPLESS_MAIN(method_to_array)

#include "tst_method_to_array.moc"

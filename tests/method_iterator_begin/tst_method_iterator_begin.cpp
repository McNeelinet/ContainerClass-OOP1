#include <QtTest>

// add necessary includes here

class method_iterator_begin : public QObject
{
    Q_OBJECT

public:
    method_iterator_begin();
    ~method_iterator_begin();

private slots:
    void test_case1();

};

method_iterator_begin::method_iterator_begin()
{

}

method_iterator_begin::~method_iterator_begin()
{

}

void method_iterator_begin::test_case1()
{

}

QTEST_APPLESS_MAIN(method_iterator_begin)

#include "tst_method_iterator_begin.moc"

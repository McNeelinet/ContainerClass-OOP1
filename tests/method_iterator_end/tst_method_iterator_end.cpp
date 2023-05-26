#include <QtTest>

// add necessary includes here

class method_iterator_end : public QObject
{
    Q_OBJECT

public:
    method_iterator_end();
    ~method_iterator_end();

private slots:
    void test_case1();

};

method_iterator_end::method_iterator_end()
{

}

method_iterator_end::~method_iterator_end()
{

}

void method_iterator_end::test_case1()
{

}

QTEST_APPLESS_MAIN(method_iterator_end)

#include "tst_method_iterator_end.moc"

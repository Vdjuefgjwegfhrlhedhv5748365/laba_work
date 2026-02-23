#include "Form.h"


int main()
{
    Triangle tr(5, 10);
    tr.draw();
    
    tr.setOffset(15);
    tr.draw();

    Circle c(3, 7);
    c.draw();

    Triangle smallTr(7, 4);
    smallTr.draw();

    tr.draw();
    return 0;
}

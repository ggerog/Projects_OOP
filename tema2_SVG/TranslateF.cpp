#include "TranslateF.h"

TranslateF::TranslateF(int X, int Y) : x(X), y(Y)
{

}

void TranslateF::proccessCircle(Circle* c)
{
    std::string Cx = c->getCx();
    std::string Cy = c->getCy();

    int i = (int)(Cx.size() - 1);
    int cx = 0;
    int cy = 0;

    for (int j = 0; j < Cx.size(); j++)
    {
        if (j != Cx.size() - 1)
        {
            cx += (Cx[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            cx += (Cx[j] - '0');
            j++;
        }
    }

    i = (int)(Cy.size() - 1);

    for (int j = 0; j < Cy.size(); j++)
    {
        if (j != Cy.size() - 1)
        {
            cy += (Cy[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            cy += (Cy[j] - '0');
            j++;
        }
    }
    cy += y;
    cx += x;

    std::string new1;
    std::string new2;

    new1 = std::to_string(cx);
    new2 = std::to_string(cy);

    c->setCx(new1);
    c->setCy(new2);

}

void TranslateF::proccessRectangle(Rectangle* r)
{
    std::string X = r->getX();
    std::string Y = r->getY();

    int i = (int)(X.size() - 1);
    int rx = 0;
    int ry = 0;

    for (int j = 0; j < X.size(); j++)
    {
        if (j != X.size() - 1)
        {
            rx += (X[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            rx += (X[j] - '0');
            j++;
        }


    }

    i = (int)(Y.size() - 1);

    for (int j = 0; j < Y.size(); j++)
    {
        if (j != Y.size() - 1)
        {
            ry += (Y[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            ry += (Y[j] - '0');
            j++;
        }
    }

    ry += y;
    rx += x;

    std::string new1;
    std::string new2;

    new1 = std::to_string(rx);
    new2 = std::to_string(ry);

    r->setX(new1);
    r->setY(new2);
}

void TranslateF::proccessElipse(Elipse* e)
{
    std::string Cx = e->getCx();
    std::string Cy = e->getCy();

    int i = (int)(Cx.size() - 1);
    int cx = 0;
    int cy = 0;

    for (int j = 0; j < Cx.size(); j++)
    {
        if (j != Cx.size() - 1)
        {
            cx += (Cx[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            cx += (Cx[j] - '0');
            j++;
        }
    }

    i = (int)(Cy.size() - 1);

    for (int j = 0; j < Cy.size(); j++)
    {
        if (j != Cy.size() - 1)
        {
            cy += (Cy[j] - '0') * (int)pow(10, i);
            i--;
        }
        else
        {
            j--;
            cy += (Cy[j] - '0');
            j++;
        }
    }

    cy += y;
    cx += x;

    std::string new1;
    std::string new2;

    new1 = std::to_string(cx);
    new2 = std::to_string(cy);

    e->setCx(new1);
    e->setCy(new2);

}



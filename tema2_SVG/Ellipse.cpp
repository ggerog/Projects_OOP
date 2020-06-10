#include "Ellipse.h"
#include "Visitor.h"

Elipse::Elipse(std::string x, std::string y, std::string ex, std::string ey, std::string color)
    :cx(x), cy(y), rx(ex), ry(ey), fill(color)
{

}

Elipse::Elipse()
{

}

void Elipse::read(std::istream& in)
{
    char temp = ' ';
    std::string str;
    while (temp != '>')
    {
        in >> temp;

        if (temp == 'c')
        {
            if (in.peek() == 'x')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    cx += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'c')
        {
            if (in.peek() == 'y')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    cy += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'r')
        {
            if (in.peek() == 'x')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    rx += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'r')
        {
            if (in.peek() == 'y')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    ry += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'f')
        {
            if (in.peek() == 'i')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    fill += temp;
                    in >> temp;
                }
            }
        }

    }

}


void Elipse::save(std::ostream& out)
{
    out << "<ellipse " << "cx=" << '"' << cx << '"' << " " << "cy=" << '"' << cy << '"' << " " << "rx=" << '"' << rx << '"' << " " << "ry=" << '"' << ry << '"' << " " << "fill=" << '"' << fill << '"' << "/> \n";
}

void Elipse::indexSet(size_t i)
{
    index = i;
}

size_t Elipse::indexGet() const
{
    return index;
}

void Elipse::accept(Visitor* v)
{
    v->proccessElipse(this);
}
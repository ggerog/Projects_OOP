#include "Circle.h"
#include "Visitor.h"


Circle::Circle(std::string x, std::string y, std::string er, std::string color) : cx(x), cy(y), r(er), fill(color)
{

}
Circle::Circle()
{

}

void Circle::read(std::istream& in)
{
    char temp = 'a';

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
            if (in.peek() == '=')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    r += temp;
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

void Circle::save(std::ostream& out)
{
    out << "<circle " << "cx=" << '"' << cx << '"' << " " << "cy=" << '"' << cy << '"' << " " << "r=" << '"' << r << '"' << " " << "fill=" << '"' << fill << '"' << "/> \n";
}

void Circle::indexSet(size_t i)
{
    index = i;
}

size_t Circle::indexGet() const
{
    return index;
}

void Circle::accept(Visitor* v)
{
    v->proccessCircle(this);
}
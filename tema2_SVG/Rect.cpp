#include "Rect.h"
#include "Visitor.h"

Rectangle::Rectangle(std::string rx, std::string ry, std::string w, std::string h, std::string f)
    : x(rx), y(ry), width(w), height(h), fill(f)
{

}
Rectangle::Rectangle()
{

}

void Rectangle::read(std::istream& in)
{
    char temp = 'a';
    std::string str;

    while (temp != '>')
    {
        in >> temp;

        if (temp == 'x')
        {
            if (in.peek() == '=')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    x += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'y')
        {
            if (in.peek() == '=')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    y += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'h')
        {
            if (in.peek() == 'e')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    height += temp;
                    in >> temp;
                }
            }
        }

        if (temp == 'w')
        {
            if (in.peek() == 'i')
            {
                while (temp != '"')
                    in >> temp;

                in >> temp;

                while (temp != '"')
                {
                    width += temp;
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

void Rectangle::save(std::ostream& out)
{
    out << "<rect " << "x=" << '"' << x << '"' << " " << "y=" << '"' << y << '"' << " " << "height=" << '"' << height << '"' << " " << "width=" << '"' << width << '"' << " " << "fill=" << '"' << fill << '"' << "/> \n";
}


void Rectangle::indexSet(size_t i)
{
    index = i;
}

size_t Rectangle::indexGet() const
{
    return index;
}

void Rectangle::accept(Visitor* v)
{
    v->proccessRectangle(this);
}

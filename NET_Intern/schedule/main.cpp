#include <iostream>
#include <fstream>
#include <string>
#include <vector>

double addtime(double x, double y)
{
    int z = 0;
    int g = 0;
    z = x / 0.01;
    g = y / 0.01;

    int i = 0;
    int a[4]{0};
    int b[4]{0};
    int c[4]{0};

    while(3 - i >= 0)
    {
        a[3 - i] = z % 10;
        b[3 - i] = g % 10;
        i++;
        z/=10;
        g/=10;
    }


    if(a[3] + b[3] > 9)
    {
        
        c[3] = a[3] + b[3] - 10;

        if(a[2] + b[2] + 1 > 5)
        {
            c[2] = a[2] + b[2] + 1 - 6;

            if(a[0] < 2)
            {
                if(a[1] + b[1] + 1 > 9)
                {
                    c[1] = a[1] + b[1] + 1 - 10;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            }
            else if (a[0] == 2)
            {
                if(a[1] + b[1] + 1 > 4 && a[1] + b[1] + 1 < 8)
                {
                    c[1] = a[1] + b[1] + 1 - 4;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            
            }
 
        }
        else
        {
            c[2] = a[2] + b[2];
            
            if(a[0] < 2)
            {
                if(a[1] + b[1] + 1 > 9)
                {
                    c[1] = a[1] + b[1] + 1 - 10;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            }
        }

    }
    else
    {
        c[3] = a[3] + b[3];
        
        if(a[2] + b[2] > 5)
        {
            c[2] = a[2] + b[2] - 6;

            if(a[0] < 2)
            {
                if(a[1] + b[1] + 1 > 9)
                {
                    c[1] = a[1] + b[1] + 1 - 10;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            }
            else if (a[0] == 2)
            {
                if(a[1] + b[1] + 1 > 4 && a[1] + b[1] + 1 < 8)
                {
                    c[1] = a[1] + b[1] + 1 - 4;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            
            }
 
        }
        else
        {
            c[2] = a[2] + b[2];
            
            if(a[0] < 2)
            {
                if(a[1] + b[1] > 9)
                {
                    c[1] = a[1] + b[1] - 10;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1];
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            }
            else if (a[0] == 2)
            {
                if(a[1] + b[1] + 1 > 4 && a[1] + b[1] + 1 < 8)
                {
                    c[1] = a[1] + b[1] + 1 - 4;
                    
                    if(a[0] + b[0] + 1 > 2)
                    {
                        c[0] = a[0] + b[0] + 1 - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0] + 1;
                    }
                }
                else
                {
                    c[1] = a[1] + b[1] + 1;
                    
                    if(a[0] + b[0] > 2)
                    {
                        c[0] = a[0] + b[0] - 2;
                    }
                    else
                    {
                        c[0] = a[0] + b[0];
                    }
                }
            
            } 
        }
    } 
    x = c[0]*10 + c[1] + c[2]*0.1 + c[3]*0.01;
    
    return x;
}

class Schedule
{
    private:
        std::string name;
        int cap;
        double availableFrom;
        double availableTo;
        std::vector<double> from;
        std::vector<double> to;

    public:

    Schedule();
    void read(std::istream& in);
    void print();
    int capp() const;
    std::string namee() const;

};
int Schedule::capp () const
{
    return cap;
}

std::string Schedule::namee() const
{
    return name;
}

Schedule::Schedule()
{
    cap = 0;
    availableFrom = 0;
    availableTo = 0;
};

void Schedule::print()
{
    std::cout << name<< "\n";
    std::cout << cap << "\n";
    std::cout << availableFrom << " ";
    std::cout << availableTo << "\n";

    for(int i = 0; i < to.size(); i++)
        std::cout << from[i] << " " << to[i] << "\n";
}

void Schedule::read(std::istream& in)
{
    char temp;
    std::string s;
    bool end = true;

    in >> s;
    s.pop_back();
    s.pop_back();
    s.erase(0,1);
    name = s;

    while(end)
    {
        in >> s;
        
        if(s[0] == '"' && s[s.length() - 2] == '"' && s[s.length() - 1] == ':')
        {
            s.pop_back();
            s.pop_back();
            s.erase(0,1);
            
            if(!s.compare("capacity"))
            {
                int n;
                in >> n;
                cap = n;
            }
            else if(!s.compare("availableFrom"))
            {
                in >> s;
                s.pop_back();
                s.pop_back();
                s.erase(0,1);     
                availableFrom = (s[0] - '0')*10  + (s[1] - '0')*1 + (s[3] - '0')*0.1 + (s[4] - '0')*0.01;
            }
            else if(!s.compare("availableTo"))
            {
                in >> s;
                s.pop_back();
                s.pop_back();
                s.erase(0,1);
                availableTo = (s[0] - '0')*10  + (s[1] - '0')*1 + (s[3] - '0')*0.1 + (s[4] - '0')*0.01;
            }
            else if(!s.compare("schedule"))
            {
                while(s[0] != ']')
                {
                    in >> s;

                    if(s[1] == 'f' && s[2] == 'r' && s[3] == 'o' && s[4] == 'm')
                    {
                         in >> s;
                        int l = s.size();
                        double x = (s[l - 10] - '0')*10  + (s[l - 9] - '0')*1 + (s[l - 7] - '0')*0.1 + (s[l - 6] - '0')*0.01;
                        from.push_back(x);
                    }
                    else if(s[1] == 't' && s[2] == 'o')
                    {
                        in >> s;
                        int l = s.size();
                        double x = (s[l - 9] - '0')*10  + (s[l - 8] - '0')*1 + (s[l - 6] - '0')*0.1 + (s[l - 5] - '0')*0.01;
                        to.push_back(x);
                    }
                }

                if(s[0] == ']')
                    end = false;                
            }
        }
    }
    
}


std::istream& operator >> (std::istream& in, std::vector<Schedule*>& rooms)
{
	std::string s;
	rooms.clear();
    std::string t{'"'};
    t.append("roomName");
    t.push_back('"');
    t.push_back(':');

	while (in)
	{
		in >> s;
        if(s[0] == '"' && s[s.length() - 2] == '"' && s[s.length() - 1] == ':')
        {
            if(!s.compare(t))            
            {
                Schedule* newRooms = new Schedule();
                newRooms->read(in);
                rooms.push_back(newRooms);
            }
        }
	}

	return in;
}

int main()
{
    std::vector<Schedule*> rooms;
    std::fstream schedule("schedule.txt");


    schedule >> rooms;

    for(auto& i: rooms)
    {
        i->print();
        std::cout << "---------- \n";
   
    }    
}
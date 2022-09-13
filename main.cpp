#include <iostream>
#include <vector>

using namespace std;

void min_max(vector<double> &v, double &min, double &max);

int main()
{
    double min;
    double max;
    vector<double> values = {-1.0, 100, 3.14, -999.9, 21.37};

    min_max(values, min, max); // wpisze znalezione wartości do zmiennych min i max

    cout << min <<endl;
    cout<<max<<endl;
}

void min_max(vector<double> &v, double &min, double &max)
{
    min = v[0];
    max = v[0];
    for(unsigned int i=1; i<v.size(); i++)
    {
        if(v[i]<min)
        {
            min = v[i];
        }
        else if(v[i]>max)
        {
            max = v[i];
        }
    }
}

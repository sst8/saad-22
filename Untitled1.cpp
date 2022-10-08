#include <iostream>
#include <cmath>
using namespace std;
void trig_func( double *_sin , double *_cos, double *angle)
{
    cout <<" _sin Value  "<<  *_sin  <<" Memory " <<_sin<< endl;
    cout <<"_cos  Value  "<<  *_cos  <<" Memory " <<_cos<< endl;
     cout <<"Vangle alue  "<<  *angle  <<" Memory " <<angle<< endl;
}
int main(){
    double x = 0.43;
    double y = 0.25;
    double z = 0.75;
    trig_func(&x ,&y,&z);
  return 0;
}


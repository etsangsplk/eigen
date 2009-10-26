#include <Eigen/Core>
#include <Eigen/LU>

using namespace std;
using namespace Eigen;

int main(int, char *[])
{
   Matrix3f A;
   Vector3f b;
   A << 1,2,3,  4,5,6,  7,8,10;
   b << 3, 3, 4;
   cout << "Here is the matrix A:" << endl << A << endl;
   cout << "Here is the vector b:" << endl << b << endl;
   Vector3f x = A.partialLu().solve(b);
   cout << "The solution is:" << endl << x << endl;
}

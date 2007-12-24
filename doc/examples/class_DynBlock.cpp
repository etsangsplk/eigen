#include <Eigen/Core.h>
USING_PART_OF_NAMESPACE_EIGEN
using namespace std;

template<typename Scalar, typename Derived>
Eigen::DynBlock<Derived>
topLeftCorner(MatrixBase<Scalar, Derived>& m, int rows, int cols)
{
  return m.dynBlock(0, 0, rows, cols);
}

int main(int, char**)
{
  Matrix4d m = Matrix4d::identity();
  cout << topLeftCorner(m, 2, 3) << endl;
  topLeftCorner(m, 2, 3) *= 5;
  cout << "Now the matrix m is:" << endl << m << endl;
  return 0;
}

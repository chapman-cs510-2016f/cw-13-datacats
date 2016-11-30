#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

int main(int argc, char **argv) 
{
  // exploit namespaces to shorten code
  using namespace boost::numeric::ublas;
  using std::cout; 
  using std::endl;

  // declare three 3x3 matrices of complex<long double> elements
  matrix<std::complex<long double> > m(11, 11);

  // iterate over 3x3 matrix entries
  // r : row index
  // c : column index
  for (unsigned r = 0; r < m.size1(); r++) {
    for (unsigned c = 0; c < m.size2(); c++) {
      // enumerated matrix entries
        int a = r -5;
        int b = c - 5;
      m(r,c) =  a + b * 1i;

    }
  }

  // print to screen as demonstration
  cout << "m:" << endl;
  cout << m << endl;

    /*
  cout << endl << "n:" << endl;
  cout << n << endl;
  cout << endl << "o:" << endl;
  cout << o << endl;
  cout << endl << "m + n:" << endl;
  cout << m + n << endl;
  cout << endl << "m * n:" << endl;
  cout << prod(m, n) << endl;*/
}

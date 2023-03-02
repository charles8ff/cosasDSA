#include <iostream>
#include <vector>


using namespace std;

//Interface for a sample of polynomials
class iPolynomial {

public:

    // An operation to get the degree (G) of the polynomial form
    unsigned int getDegree();

    // An operation to get the coefficient of the k-th term (ak)
    int getCoeficient();

    // An operation to set the coefficient of the k-th term (ak)
    void setCoeficient( unsigned int k, int newValue );

    // An operation to evaluate the polynomial form for a specific value of X
    double evaluate( double x );

    // An operation to sum to the polynomial form another polynomial form (q)
    iPolynomial sum( iPolynomial q );

    // An operation to check the equality of two polynomial forms
    bool isEqual( iPolynomial& q );

    // An operation to generate a string with the polynomial form
    string print();


protected:
    vector<int> coefs;


};

int main (){



    
    return 0;
}
#ifndef global_h
#define global_h
#include <TROOT.h>
//
// define some useful constants:
//
const Double_t sqrt2    = sqrt(2.0);
const Double_t sqrt2pi  = 2.5066282746;

const int dim    = 4;  // number of fit parameters
// 'pointers' to the parameters
const int Par_Z0    = 0;  // index of position of luminosity peak in z  
const int Par_Sigma = 1;  // index of sigma in z of the beam
const int Par_eps   = 2;  // index of emittance 
const int Par_beta  = 3;  // index of beta*  

struct data
 {
   double Z,SigZ,D,SigD,Phi,weight2;
   data(double z, double sigz,double d, double sigd,double phi, double weight2)
     : Z(z), SigZ(sigz),D(d),SigD(sigd),Phi(phi),weight2(1){}
};
typedef std::vector<data> zData;//!
typedef zData::const_iterator zDataConstIter;//!
typedef zData::iterator zDataIter;//!
//zData zdata;//!
#endif //

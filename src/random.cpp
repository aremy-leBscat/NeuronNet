#include "random.h"

 void RandomNumbers::uniform_double(std::vector<double>& a_remplir, double lower, double upper){
	 std::uniform_real_distribution<>unid(lower,upper);
	 for(size_t i(0);i<a_remplir.size();++i){
	 a_remplir[i]= unid(RandomNumbers::rng);
	 }
 }
 
 double RandomNumbers::uniform_double(double lower, double upper){
	 std::uniform_real_distribution<>unid(lower,upper);
	 double uniformnumber;
	 uniformnumber =unid(RandomNumbers::rng);
	 return uniformnumber;
 }
 
 void RandomNumbers::normal(std::vector<double>& a_remplir, double mean, double sd){
	 std::normal_distribution<>normd{mean,sd};
	 for( size_t i(0);i<a_remplir.size();++i)
	 {
		 a_remplir[i]= normd(RandomNumbers::rng);
	 }
	 
 }
 
 double RandomNumbers::normal(double mean, double sd){
	 std::normal_distribution<>normd{mean,sd};
	 double normal_no;
	 normal_no = normd(RandomNumbers::rng);
	 return normal_no;
 }
 
 void RandomNumbers::poisson(std::vector<int>& a_remplir, double mean){
	 std::poisson_distribution<> pois(mean);
	 for(size_t i(0);i< a_remplir.size();++i)
	 {
		a_remplir[i]= pois(RandomNumbers::rng);
	  }
 }
 
 int RandomNumbers::poisson(double mean){
	 std::poisson_distribution<> pois(mean);
	 int pois_no;
	 pois_no = pois(RandomNumbers::rng);
	 return pois_no;
 }



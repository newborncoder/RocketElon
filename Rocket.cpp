#include<iostream>
#include<string>
#include<list>
#include<iterator>

using namespace std;

class Rocket{

string rocket_name;
string type_of_engine;
string type_of_propulent;
int no_of_engines;
int no_of_stages;
int capsule_weight;
int tanks;


list <int> list_of_engines;
  
  void set_rocket_name(string name){
	rocket_name = name;
  }
  
  void set_type_of_engine(string type){
	type_of_engine = type;
  }

  void set_type_of_propulent(string propulent){
	type_of_propulent = propulent;
  }

  void set_engine_count(int engine_count){
	no_of_engine = 	engine_count;
  }
 
  void set_capsule_weight(int capsule_load){
	capsule_weight = capsule_load;
  }
   
  void set_stages(int stage){
	int tanks = stage
  }

  
  virtual int start(list <int> engines){
	cout << "Preparing to start the Engines. Get ready." << endl;
  }

  virtual int stop(list <int> engines){
	cout << :"Preparing to stop the Engines." << endl;
  }
	
  virtual int steer_in_space(left,right,up,down){
	cout << "Preparing to Steer in space." << endl ;
  }
  
  virtual int steer_in_air(list_fins){
	cout << "Preparing to steer using fins in the air." << endl;
  }
  
  virtual int seperate_rocket(stage){
	cout << "Preparing to seperate the " + stage + " stage." << endl;
  }
  

}



/***************************** Made by Duarte Gonçalves *********************************/

#include "human_aware_navigation/DistanceMeasurer.hpp"


int main( int argc, char** argv )
{
  ros::init( argc, argv, "DistanceMeasurer");

  DistanceMeasurer DM;

  DM.run();

  return 0;
}

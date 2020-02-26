#include <gazebo/gazebo.hh>

namespace gazebo{
class WorldPluginEimer: public WorldPlugin{
public:
    WorldPluginEimer(): WorldPlugin(){
        printf("Welcome to Anastasia's World!\n");
    }
    void Load(physics:: WorldPtr _world, sdf::ElementPtr _sdf){
    };
}; 
   GZ_REGISTER_WORLD_PLUGIN(WorldPluginEimer);
}

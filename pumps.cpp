#include <iostream>
using namespace std;

class Pump {
  public:
    float dispCc;
    float dispCir;
    float pumpSpeed;
    float pressure;


    Pump(float dispCc, float pumpSpeed, float pressure){
        this->dispCc = dispCc;
        this->pumpSpeed = pumpSpeed;
        this->pressure = pressure;

}
    float flow() {
        dispCir = convertToCir();
        float pumpFlow = (dispCir*pumpSpeed)/231;
        return pumpFlow;
    }
    float convertToCir() {
        float dispCir = dispCc * 0.06102;
        return dispCir;
    }
    float pumpEffiency(float actualFlow) {
        float pumpEff = ((actualFlow*231)/(dispCir*pumpSpeed))*100;
        return pumpEff;
    }
};


int main() {
    Pump pump1(140, 1800, 3000);
    cout<<pump1.flow()<<endl;
    ;


  return 0;
   }

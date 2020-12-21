#include <iostream>
using namespace std;

class PumpStandard {
  public:
    float dispCir;//cubic inches per revolution
    float pumpSpeed;//rpm
    float pressure;//units - psi


    PumpStandard(float dispCir, float pumpSpeed, float pressure){
        this->dispCir = dispCir;//cubic inches per revolution
        this->pumpSpeed = pumpSpeed;//rpm
        this->pressure = pressure;//psi

}

    float flow() {
        float pumpFlow = (dispCir*pumpSpeed)/231;
        return pumpFlow;
    }

    float pumpEffiency(float actualFlow) {
        float pumpEff = ((actualFlow*231)/(dispCir*pumpSpeed))*100;
        return pumpEff;
    }
};


int main() {
    PumpStandard pump1(140, 1800, 3000);
    cout<<pump1.flow()<<endl;
    ;


  return 0;
   }

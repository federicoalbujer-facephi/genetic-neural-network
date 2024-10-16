#pragma once

#include <vector>

namespace FedericoAlbujer::NeuralNetwork {
class Neuron final {
  public:
    void setWeights(std::vector<float> weights);
    void setWeight(int index, float weight);
    void setBias(float bias);
    void setNumInputs(int numInputs);

    std::vector<float> getWeights() const;
    float              getWeight(int index) const;
    float              getBias();
    int                getNumInputs();

    float calculateOutput(std::vector<float> inputs);

  private:
    std::vector<float> weights   = {0.0f};
    float              bias      = -1.0f;
    int                numInputs = 0;
};
}    // namespace FedericoAlbujer::NeuralNetwork
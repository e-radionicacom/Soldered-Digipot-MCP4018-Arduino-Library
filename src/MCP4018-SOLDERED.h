/**
 **************************************************
 *
 * @file        Generic-easyC-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Borna Biro @ soldered.com
 ***************************************************/

#ifndef __DIGIPOT_MCP4018__
#define __DIGIPOT_MCP4018__

#include "Arduino.h"
#include "libs/Generic-easyC/easyC.h"

#define MCP4018_I2C_ADDRESS 0x2F

class MCP4018_SOLDERED : public EASYC_SOLDERED_MCP4018::EasyC
{
  public:
    MCP4018_SOLDERED();
    void setWiperPercent(int _wiper);
    void setWiperValue(int _byte);
    int getWiperPercent();
    uint8_t getWiperValue();
    void increment();
    void decrement();

  protected:
    void initializeNative();

  private:
    uint8_t _value;
};

#endif
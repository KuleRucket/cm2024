#ifndef DATMESSAGE_HPP_INCLUDED
#define DATMESSAGE_HPP_INCLUDED

#include "message.h"

#include <QMetaType>
#include <stdint.h>


class DatMessage : public Message {
public:

    using Message::Message;
    /*
    DatMessage();
    DatMessage(char* buffer, int16_t len);
    DatMessage(const DatMessage &other);
    ~DatMessage();
    */


    uint16_t getCounter() const;
    uint8_t getSlotId() const;
    std::string getSlotIdStr() const;
    uint8_t getChemistry() const;
    std::string getChemistryStr() const;
    uint8_t getProgramState() const;
    std::string getProgramStateStr() const;
    uint8_t getProgram() const;
    std::string getProgramStr() const;
    std::string programAsString(uint8_t program) const;
    uint8_t getStep() const;
    std::string getStepStr() const;
    uint16_t getMinutes() const;
    std::string getTimerStr() const;
    uint16_t getVoltage() const; // in units of 0.001
    std::string getVoltageStr() const;
    uint16_t getCurrent() const; // in units of 0.001
    std::string getCurrentStr() const;
    uint32_t getChargeCap() const; // in units of 0.01
    std::string getChargeCapStr() const;
    uint32_t getDischargeCap() const; // in units of 0.01
    std::string getDischargeCapStr() const;
    uint8_t getMaxCharge() const;
    uint8_t getPause() const;
    uint16_t getCapacity() const;
    uint8_t getDischarge() const;
    uint16_t getCrc() const;

    void print() const;
    void printSummary() const;
};

Q_DECLARE_METATYPE(DatMessage);

#endif // DATMESSAGE_HPP_INCLUDED

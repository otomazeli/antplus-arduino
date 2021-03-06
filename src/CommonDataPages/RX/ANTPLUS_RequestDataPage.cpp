#include <CommonDataPages/RX/ANTPLUS_RequestDataPage.h>
#include <CommonDataPages/ANTPLUS_CommonDataPagePrivateDefines.h>

RequestDataPage::RequestDataPage(AntRxDataResponse& dp) : BaseDataPage<AcknowledgedData>(dp) {

}

uint16_t RequestDataPage::getSlaveSerialNumber() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_SLAVESERIALNUMBER_LSB_BYTE) | (getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_SLAVESERIALNUMBER_MSB_BYTE) << ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_SLAVESERIALNUMBER_MSB_SHIFT);
}

uint8_t RequestDataPage::getDescriptorByte1() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_DESCRIPTORBYTE1_BYTE);
}

uint8_t RequestDataPage::getDescriptorByte2() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_DESCRIPTORBYTE2_BYTE);
}

uint8_t RequestDataPage::getRequestedTransmissionResponse() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_REQUESTEDTRANSMISSIONRESPONSE_BYTE);
}

uint8_t RequestDataPage::getRequestedPageNumber() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_REQUESTEDPAGENUMBER_BYTE);
}

uint8_t RequestDataPage::getCommandType() {
    return getData(ANTPLUS_COMMON_DATAPAGE_REQUESTDATAPAGE_COMMANDTYPE_BYTE);
}

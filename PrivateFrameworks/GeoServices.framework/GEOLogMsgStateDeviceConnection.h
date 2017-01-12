/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {
    NSString * _deviceCarrierName;
    NSString * _deviceCountryCode;
    int  _deviceNetworkConnectivity;
    struct { 
        unsigned int deviceNetworkConnectivity : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *deviceCarrierName;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic) int deviceNetworkConnectivity;
@property (nonatomic, readonly) BOOL hasDeviceCarrierName;
@property (nonatomic, readonly) BOOL hasDeviceCountryCode;
@property (nonatomic) BOOL hasDeviceNetworkConnectivity;

- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCarrierName;
- (id)deviceCountryCode;
- (int)deviceNetworkConnectivity;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasDeviceCarrierName;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDeviceNetworkConnectivity;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceCarrierName:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceNetworkConnectivity:(int)arg1;
- (void)setHasDeviceNetworkConnectivity:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
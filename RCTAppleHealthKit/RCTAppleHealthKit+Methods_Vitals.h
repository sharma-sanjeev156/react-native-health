//
//  RCTAppleHealthKit+Methods_Vitals.h
//  RCTAppleHealthKit
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Vitals)

- (void)vitals_saveHeartRateSample:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRestingHeartRate:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getWalkingHeartRateAverage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBodyTemperatureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getBloodPressureSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRespiratoryRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getRestingHeartRateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartRateVariabilitySamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getHeartbeatSeriesSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getVo2MaxSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getOxygenSaturationSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getElectrocardiogramSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getLatestUVExposure:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getLatestTimeInDaylight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getNumberOfAlcoholicBeverages:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getElectrodermalActivity:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)vitals_getLatestAppleSleepingWristTemperature:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
@end

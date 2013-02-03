/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SWPaceModel : NSObject {
     /* Encoded args for previous method: ^{PaceModel=fBCSBCLBLLLLLCSLLfsfsfffsfsffC[3C][7S]CBSSSBBLLLLLSB[3C]fsfsfsfsCSC}8@0:4 */
    void *_paceModelValue;
}

@property(copy) NSData *parameters;
@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property(readonly) float distanceInMiles;
@property(readonly) BOOL isWalk;
@property(readonly) NSUInteger lifetimeBatteryHoursUsed;
@property(readonly) float lifetimeCalibratedRunningMiles;
@property(readonly) float lifetimeCalibratedWalkingMiles;
@property(readonly) float lifetimeUncalibratedRunningMiles;
@property(readonly) float lifetimeUncalibratedWalkingMiles;
@property(readonly) float maximumValidCalibrationMiles;
@property(readonly) float minimumValidCalibrationMiles;
@property(readonly) float paceInSecondsPerMile;
@property(readonly) NSUInteger remainingBatteryLifetimeInHours;
@property(readonly) NSUInteger runningStepCount;
@property(readonly) NSUInteger walkingStepCount;

- (id)FGSNForRadioId:(NSUInteger)arg1;
- (struct PaceModel { float x1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x2; unsigned char x3; unsigned short x4; void*x5; unsigned char x6; unsigned long x7; void*x8; unsigned long x9; unsigned long x10; unsigned long x11; unsigned long x12; unsigned long x13; unsigned char x14; unsigned short x15; unsigned long x16; unsigned long x17; float x18; short x19; float x20; short x21; float x22; float x23; float x24; short x25; float x26; short x27; float x28; float x29; unsigned char x30; unsigned char x31[3]; unsigned short x32[7]; unsigned char x33; void*x34; unsigned short x35; unsigned short x36; unsigned short x37; void*x38; void*x39; unsigned long x40; unsigned long x41; unsigned long x42; unsigned long x43; unsigned long x44; unsigned short x45; void*x46; unsigned char x47[3]; float x48; short x49; float x50; short x51; float x52; short x53; float x54; short x55; unsigned char x56; unsigned short x57; unsigned char x58; }*)_paceModel;
- (BOOL)calibrateWithDistanceMiles:(float)arg1 forWalk:(BOOL)arg2;
- (float)caloriesForWeight:(float)arg1;
- (BOOL)canBeUsedForRunCalibration;
- (BOOL)canBeUsedForWalkCalibration;
- (void)dealloc;
- (float)distanceInMiles;
- (BOOL)feedPacketPayload:(const char *)arg1 timestamp:(unsigned long)arg2;
- (id)init;
- (BOOL)isWalk;
- (NSUInteger)lifetimeBatteryHoursUsed;
- (float)lifetimeCalibratedRunningMiles;
- (float)lifetimeCalibratedWalkingMiles;
- (float)lifetimeUncalibratedRunningMiles;
- (float)lifetimeUncalibratedWalkingMiles;
- (float)maximumValidCalibrationMiles;
- (float)minimumValidCalibrationMiles;
- (float)paceInSecondsPerMile;
- (id)parameters;
- (NSUInteger)radioIdForFGSN:(id)arg1;
- (BOOL)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (NSUInteger)remainingBatteryLifetimeInHours;
- (void)resetCalibration;
- (void)resumeEvent;
- (NSUInteger)runningStepCount;
- (void)setParameters:(id)arg1;
- (void)startEventWithInitialMiles:(float)arg1 isCalibration:(BOOL)arg2;
- (void)stopEvent;
- (NSUInteger)walkingStepCount;

@end
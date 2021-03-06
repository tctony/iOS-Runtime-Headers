/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@class NSDictionary, NSMutableDictionary, NSString;

@interface AWDStats : NSObject {
    unsigned int audioFlush;
    unsigned int audioPauseTime;
    unsigned int avgInterarrivalTime;
    unsigned int avgInterarrivalTimeCount;
    unsigned int avgJitterBufferSize;
    unsigned int avgJitterBufferSizeCount;
    unsigned int avgLossRate;
    unsigned int avgLossRateCount;
    unsigned int avgRate;
    unsigned int avgRateCount;
    unsigned int basebandCount;
    unsigned int callNonce;
    double currentCellTechDuration;
    NSString *currentInterface;
    unsigned int downlinkEstimateAvg;
    unsigned int downlinkEstimateAvgCount;
    void *gksDiagnosticSubmissionHandle;
    NSDictionary *histogramDict;
    NSString *interfaceName;
    BOOL isSender;
    unsigned int lastVRAWidth;
    float localVideoDegradeTime;
    double previousCellTechDuration;
    NSString *previousInterface;
    NSString *remoteInterfaceName;
    float remoteVideoDegradeTime;
    unsigned int rxFrameRateAvg;
    unsigned int rxFrameRateAvgCount;
    unsigned int rxFrameRateMax;
    unsigned int rxFrameRateMin;
    unsigned int rxHeight;
    unsigned int rxWidth;
    long startTime;
    unsigned int targetFramerate;
    unsigned int terminationReason;
    double timeSinceLastCellTech;
    double timeSinceLastVRA;
    NSMutableDictionary *timingDict;
    unsigned int txFrameRateAvg;
    unsigned int txFrameRateAvgCount;
    unsigned int txFrameRateMax;
    unsigned int txFrameRateMin;
    unsigned int txHeight;
    unsigned int txWidth;
    unsigned int uplinkEstimateAvg;
    unsigned int uplinkEstimateAvgCount;
    unsigned int videoFlush;
    unsigned int videoPauseTime;
}

@property float localVideoDegradeTime;
@property float remoteVideoDegradeTime;

+ (void)initialize;
+ (id)statsSingleton;

- (void)accumulateAudioFlush:(unsigned int)arg1;
- (void)accumulateAudioPauseTime:(unsigned int)arg1;
- (void)accumulateAverageInterarrivalTime:(unsigned int)arg1;
- (void)accumulateAverageRate:(unsigned int)arg1;
- (void)accumulateAvgLossRate:(unsigned int)arg1;
- (void)accumulateDownlinkEstimate:(unsigned int)arg1;
- (void)accumulateJitterBufferSize:(unsigned int)arg1;
- (void)accumulateRxFrameRate:(unsigned int)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3;
- (void)accumulateTxFrameRate:(unsigned int)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3;
- (void)accumulateUplinkEstimate:(unsigned int)arg1;
- (void)accumulateVideoFlush:(unsigned int)arg1;
- (void)accumulateVideoPauseTime:(unsigned int)arg1;
- (void)addConnectivityTiming:(struct tagConnectivityTiming { int x1[12]; })arg1;
- (void)addFloatValue:(float)arg1 toHistogram:(id)arg2;
- (void)addVRAWidth:(unsigned int)arg1;
- (void)addValue:(unsigned int)arg1 toHistogram:(id)arg2;
- (void)callEnd;
- (void)callStartIsSender:(bool)arg1 forTime:(long)arg2;
- (void)dealloc;
- (void)finishCellTech;
- (void)finishVRA;
- (void)incrementBasebandCount;
- (id)init;
- (float)localVideoDegradeTime;
- (void)printHistograms;
- (float)remoteVideoDegradeTime;
- (void)reset;
- (int)sendBasebandStatsToAWD;
- (int)sendConnectivityTimingToAWD;
- (int)sendHistogramsToAWD;
- (int)sendInterfaceStatusToAWD;
- (int)sendRTStatsToAWD;
- (int)sendVideoQualityStatsToAWD;
- (int)sendVideoStatusToAWD;
- (void)setFirstRemoteFrameTiming:(unsigned int)arg1;
- (void)setInterface:(id)arg1;
- (void)setLocalVideoDegradeTime:(float)arg1;
- (void)setLocalWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(unsigned int)arg3;
- (void)setRemoteInterface:(id)arg1;
- (void)setRemoteVideoDegradeTime:(float)arg1;
- (void)setRemoteWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setTerminationReason:(unsigned int)arg1;
- (void)updateCellTech:(id)arg1;

@end

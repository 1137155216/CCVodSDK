//
//  DWAnswerRequest.h
//  CCVodSDK
//
//  Created by hd on 2021/6/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DWAnswerRequest : NSObject

/**
 *获取答题器问题
 *videoid:加密视频id，必填
 *userid:加密用户id，必填
 *reskeys：权限key：如：video_clicker,video_knowledge知识点和答题器
 */
+ (void)sendGetAnswerDataWithVideoId:(NSString *)videoId userId:(NSString *)userId  reskeys:(NSString *)reskey callBlock:(void(^)(NSDictionary *dic))callBackBlock;

/**
 *提交答案
 *ids:只提交用户点击的答案id，逗号分隔，必填
 *clickerid:答题器id
 */
+ (void)sendGetDataWithIds:(NSString *)ids clickerid:(NSString *)clickerid successBlock:(void(^)(NSDictionary *dict))successBlock errorBlock:(void(^)(NSDictionary *errorDict))errorBlock;
@end

NS_ASSUME_NONNULL_END

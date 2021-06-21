//
//  MSIMManager+Parse.h
//  BlackFireIM
//
//  Created by benny wang on 2021/3/16.
//

#import <MSIMSDK/MSIMManager.h>

NS_ASSUME_NONNULL_BEGIN

@class Profile;
@class ChatR;
@class ChatList;
@class ProfileOnline;
@class UsrOffline;
@class ChatItemUpdate;
@interface MSIMManager (Parse)

///收到服务器下发的消息处理
- (void)receiveMessageHandler:(NSArray<ChatR *> *)responses;

///服务器返回的批量用户信息处理
- (void)profilesResultHandler:(NSArray<Profile *> *)list;

///服务器返回的会话列表数据处理 
- (void)chatListResultHandler:(ChatList *)list;

///服务器返回的用户上线下线通知处理
- (void)userOnLineChangeHandler:(NSArray *)onlines;

///会话某些属性发生变更
- (void)chatListChanged:(ChatItemUpdate *)item;

///服务器返回的历史数据处理
- (NSArray<MSIMElem *> *)chatHistoryHandler:(NSArray<ChatR *> *)responses;

- (void)elemNeedToUpdateConversations:(NSArray<MSIMElem *> *)elem increaseUnreadCount:(NSArray<NSNumber *> *)increases isConvLastMessage:(BOOL)isConvLastMessage;

///同步最后一页聊天记录
- (void)updateConvLastMessage:(NSArray *)convs;

@end

NS_ASSUME_NONNULL_END

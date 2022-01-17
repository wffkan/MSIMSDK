//
//  MSChatRoomManager.h
//  MSIMSDK
//
//  Created by benny wang on 2021/12/28.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@class MSGroupInfo;
@class MSIMElem;
@interface MSChatRoomManager : NSObject


+ (instancetype)sharedInstance;

/// 一个app对应一个固定的聊天室，在im login时，配置一个聊天室
- (void)loginChatRoom:(NSInteger)chatRoom;

/** 缓存的聊天室聊天记录*/
@property(nonatomic,strong,readonly) NSMutableArray<MSIMElem *> *messages;

@property(nonatomic,assign,readonly) NSInteger unreadCount;

/// 聊天室信息 ，包含群成员信息
@property(nonatomic,strong,nullable) MSGroupInfo *chatroomInfo;

/// 聊天室最后一条可展示的消息，用于会话列表的展示
@property(nonatomic,strong,readonly,nullable) MSIMElem *last_show_msg;

@end

NS_ASSUME_NONNULL_END

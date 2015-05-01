//  Created by Karen Lusinyan on 03/03/15.
//  Copyright (c) 2015 Karen Lusinyan. All rights reserved.

#import <GameKit/GameKit.h>

extern NSString * const CommonGameCenterWillStartSynchronizing;
extern NSString * const CommonGameCenterDidFinishSynchronizing;
extern NSString * const CommonGameCenterLocalPlayerDidChange;
extern NSString * const CommonGameCenterLocalPlayerPhotoDidLoad;

@interface CommonGameCenter : NSObject

/*!
 *  @brief  Call this method to start managing game center
 *
 *  @param result of authentification
 */
+ (void)startAuthenticationWithCompletion:(void (^)(BOOL authenticated, NSError *error))completion;

/*!
 *  @brief  Call this method to get user's authentification state
 *
 *  @return return YES if player is logged into game center
 */
+ (BOOL)playerIsAuthenticated;

/*!
 *  @brief  Call this method to get local player display name
 *
 *  @return local player's display name
 */
+ (NSString *)localPlayerAlias;

/*!
 *  @brief  Call this method to get local player photo
 *
 *  @return local player's photo
 */
+ (UIImage *)localPlayerPhoto;

/*!
 *  @brief  Call this method to sent score to specific leaderboard
 *
 *  @param score       player's score to report to game center
 *  @param identifier  leaderboard's identifier
 */
+ (void)reportScore:(int64_t)score forLeaderboard:(NSString *)identifier;

/*!
 *  @brief  Call this method to obtain local Player score for given leaderboard
 *
 *  @param identifier leaderboard's identifier
 *  @return GKScore value parameter
 *  @warning If leaderboard does not exist it would be created with default CGKScore value=0
 */
+ (GKScore *)obtainScoreForLeaderboard:(NSString *)identifier;

/*!
 *  @brief  Call this method to create local leaderboard
 *
 *  @param identifier leaderboard identifier
 *  @param attributes CGKScore attributes. Ex: leadebord level could set defualt {@"value" : 1}
 */
+ (void)createLeaderboardIfNotExists:(NSString *)identifier attributes:(NSDictionary *)attributes;

/*!
 *  @brief  Call thid method to get leaderboard indentifiers
 *
 *  @return array of leaderboards of type GKLeaderboard
 */
+ (NSArray *)leaderboards;

/*!
 *  @brief  Call this method to set defualt leaderboard
 *
 *  @param identifier default leaderboard's identifier
 */
+ (void)setDefaultLeaderboard:(NSString *)identifier;

/*!
 *  @brief  Call this method to display leaderboard
 *
 *  @param identifier leaderboard's identifier
 *  @param target     viewcontroller which will present requested leaderbaord
 *  @param completion will be called when viewcontroller did dismiss
 */
+ (void)showLeaderboard:(NSString *)identifier withTarget:(id)target completionWhenDismissed:(void (^)(void))completion;

@end

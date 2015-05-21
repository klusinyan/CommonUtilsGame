# CommonUtilsGame

[![CI Status](http://img.shields.io/travis/Karen Lusinyan/CommonUtilsGame.svg?style=flat)](https://travis-ci.org/Karen Lusinyan/CommonUtilsGame)
[![Version](https://img.shields.io/cocoapods/v/CommonUtilsGame.svg?style=flat)](http://cocoapods.org/pods/CommonUtilsGame)
[![License](https://img.shields.io/cocoapods/l/CommonUtilsGame.svg?style=flat)](http://cocoapods.org/pods/CommonUtilsGame)
[![Platform](https://img.shields.io/cocoapods/p/CommonUtilsGame.svg?style=flat)](http://cocoapods.org/pods/CommonUtilsGame)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Step 1
    Put this in your AppDelegate.m

    // If you already setup leaderboard in iTunesConnect -> pass the leaderboard's identifier
    
    static NSString * LeaderboardIdentifier = @"My-Leaderboard";
    
    [CommonGameCenter createLeaderboardIfNotExists:LeaderboardIdentifier attributes:nil];
    
    // ... setup more leaderboars
    
    [CommonGameCenter startAuthenticationWithCompletion:^(BOOL authenticated, NSError *error) {
        // game center started either offline or online
    }];

## Step 2
    #import CommonGameCenter.h 

## Step 3
    // Obtain score from leaderboard (returns GKScore)
    [CommonGameCenter obtainScoreForLeaderboard:@"My-Leaderboard"]
    
    // Report score to leaderboard
    [CommonGameCenter reportScore:100 forLeaderboard:@"My-Leaderboard"];

    
## Step 4
    That's it! 
    Enjoy

## New features
    Comming soon :-)

## Requirements

    Requires iOS 7 and later
    Written in ARC
    
## Installation

CommonUtilsGame is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "CommonUtilsGame"
```

## Author

Karen Lusinyan, karen.lusinyan.developerios@gmail.com

## License

CommonUtilsGame is available under the MIT license. See the LICENSE file for more info.

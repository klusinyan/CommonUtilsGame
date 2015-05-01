Pod::Spec.new do |s|
    s.name         = 'CommonUtilsGame'
    s.version      = '0.1.0'
    s.summary      = 'CommonUtils extension for Game.'
    s.homepage     = 'https://bitbucket.org/klusinyan/commonutilsgame/'
    s.license      = { :type => 'MIT', :file => 'LICENSE' }
    s.author       = { 'Karen Lusinyan' => 'karen.lusinyan.developerios@gmail.com' }
    s.platform     = :ios, '7.0'
    s.source       = { :git => 'https://klusinyan/commonutilsgame.git', :tag => s.version.to_s }

    s.requires_arc = true
    s.prefix_header_file = 'Pod/Classes/Pod-Prefix.pch'
    s.source_files = 'Pod/Classes/**/*.{h,m}'

    s.resource_bundles = { 'Pod' => ['Pod/Classes/GameCenter/CommonGameCenter.bundle'] }

    #-------- Frameworks --------
    s.frameworks = 'GameKit'
    #---------------------------
end
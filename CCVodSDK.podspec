
Pod::Spec.new do |spec|

  spec.name         = "CCVodSDK"
  spec.version      = "1.0.0"
  spec.license      = { :type => 'MIT' }
  spec.homepage     = "https://github.com/1137155216/CCVodSDK.git"
  spec.author       = { "dyc" => "1137155216@qq.com" }
  spec.summary      = "CCVodSDK"
  spec.source       = { :git => "https://github.com/1137155216/CCVodSDK.git", :tag => "#{spec.version}" }
  spec.platform     = :ios, '12.0'
  spec.vendored_frameworks = 'CCVodSDK.framework'
  spec.frameworks   = 'UIKit','Foundation'

end

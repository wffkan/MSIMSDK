Pod::Spec.new do |spec|

  spec.name         = "MSIMSDK"
  spec.version      = "1.2.8"
  spec.summary      = "MSIM核心框架......................................"

  spec.homepage     = "https://github.com/wffkan/MSIMSDK"

  spec.license      = "MIT"

  spec.author       = { "wffkan" => "409322456@qq.com" }
  
  spec.source       = { :git => "https://github.com/wffkan/MSIMSDK.git", :tag => spec.version }
   
  spec.ios.deployment_target = "11.0"

  spec.source_files = 'MSIMSDK/MSIMSDK.framework/Headers/*.h'
  spec.public_header_files = 'MSIMSDK/MSIMSDK.framework/Headers/*.h'
  spec.vendored_frameworks = 'MSIMSDK/MSIMSDK.framework'

  spec.xcconfig = { 'HEADER_SEARCH_PATHS' => '${PODS_ROOT}/MSIMSDK/MSIMSDK.framework/Headers/'}
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end

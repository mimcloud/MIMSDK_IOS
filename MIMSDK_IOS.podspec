Pod::Spec.new do |s|
  s.name     = 'MIMSDK_IOS'
  s.version  = '0.0.1'
  s.license  = 'MIT'
  s.summary  = 'A chat framework'
  s.homepage = 'https://github.com/mimcloud/MIMSDK_IOS'
  s.authors  = { 'Micky Chan' => '574483223@qq.com' }
  s.source   = { :git => 'https://github.com/mimcloud/MIMSDK_IOS.git', :tag => s.version }

  s.ios.deployment_target = '9.0'

  s.source_files = 'MIMSDK.framework/Headers/*.h'
  s.vendored_frameworks = 'MIMSDK.framework'
  s.dependency 'WCDB', '~> 1.0.7.5'
  s.dependency 'YYKit', '~> 1.0.9'
  s.dependency 'YTKNetwork', '~> 3.0.0'
  s.dependency 'CocoaAsyncSocket', '~> 7.6.4'

end

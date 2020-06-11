Pod::Spec.new do |s|
  s.name     = 'MIMSDK_IOS'
  s.version  = '0.0.2'
  s.license  = 'MIT'
  s.summary  = 'A chat framework'
  s.homepage = 'https://github.com/mimcloud/MIMSDK_IOS'
  s.authors  = { 'Micky Chan' => '574483223@qq.com' }
  s.source   = { :git => 'https://github.com/mimcloud/MIMSDK_IOS.git', :tag => s.version }

  s.ios.deployment_target = '9.0'

  s.source_files = 'MIMSDK.framework/Headers/*.h'
  s.vendored_frameworks = 'MIMSDK.framework'

end

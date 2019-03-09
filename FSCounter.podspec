Pod::Spec.new do |s|
  s.name             = 'FSCounter'
  s.version          = '1.1'
  s.summary          = 'FSCounter is a tool for apps'
  s.description      = <<-DESC
		This is a very small software library, offering a few methods to help with programming.
    DESC

  s.homepage         = 'https://github.com/fuchina/FSCounter'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fudon' => '1245102331@qq.com' }
  
  s.source           = {:git => 'https://github.com/fuchina/FSCounter.git', :tag => s.version.to_s}

  s.source_files = 'FSCounter/classes/*.{h}'
  s.ios.vendored_libraries = 'FSCounter/libs/libFSCounter.a'
  s.ios.deployment_target = '8.2'
  
  s.dependency   'FSJZKit'

end
